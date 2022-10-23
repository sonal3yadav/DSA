class meetPair{
    int start;
    int end;
    meetPair(int start, int end){
        this.start=start;
        this.end=end;
    }
}
/*
to sort ending array
comp=-neg value no swap
comp=+pos swap
comp=0 sort on the basis of another var of two obj 
here according start value
*/

class Solution 
{
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.

    public static int maxMeetings(int start[], int end[], int n)
    {
    class comp implements Comparator<meetPair>{
        public int compare(meetPair o1, meetPair o2){
            if(o1.end>o2.end){
                return 1; // swap
            }
            else if(o1.end<o2.end){
                return -1; // no swap
            }
            else{ // means o1.end==o2.end
                if(o1.start>o2.start){
                    return 1; // swap
                }
            }
            return 0;
        }
    }
   
        // add your code here
        ArrayList<meetPair> arr = new ArrayList<>();
        for(int i=0; i<n;i++){
            arr.add( new meetPair(start[i],end[i]));
        }
        comp c =new comp();
        Collections.sort(arr,c); // sort 
        int ans =1; // 1st meeting 
        int prev=arr.get(0).end;
        
        for(int i=1;i<n;i++){
            if(arr.get(i).start>prev){
                ans++;
                prev=arr.get(i).end;
            }
        }
        return ans;
    }
}
//  Contribute by keertigupta
