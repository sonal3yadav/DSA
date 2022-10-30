#include<iostream>
using namespace std;

struct sortedStack{
    struct node{
        int data;
        node *next;
        node(int d, node *n=nullptr){
            data=d, next=n;
        }
    } *top;
    sortedStack(){
        top=nullptr;
    }
    void insert(int d){
        node *newNode = new node(d);
        if(!top)    top=newNode;
        else{
            node *tmp = top;
            while(tmp->next){
                if(tmp->next->data >= d)
                    break;
            }
            newNode -> next = tmp -> next;
            tmp->next = newNode;
        }
    }
    bool isEmpty(){return top==nullptr;}
    int pop(){
        node* tmp=top;
        int ans=tmp->data;
        top=top->next;
        delete tmp;
        return ans;
    }
};

void bucketSort(int arr[], int n, int k){
    int M=arr[0];
    for(int i=1; i<n; i++)  M=max(arr[i], M);
    M++;
    sortedStack buckets[k];
    int z=0;
    for(int i=0; i<n; i++)  buckets[int((float)arr[i]*k/M)].insert(arr[i]);
    for(int i=0; i<k; i++)
        while(!buckets[i].isEmpty())
            arr[z++]=buckets[i].pop();
}

int main(){
    int n=0, k=0;   cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bucketSort(arr, n, k);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    return 0;
}