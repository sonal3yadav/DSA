function arrayManipulation(n, queries) {
    // Write your code here
    let newArr = new Array(n+1).fill(0);
    for(let a = 0;a<queries.length; a++) {
        // for(let i = queries[a][0]-1; i< queries[a][1];i++) {
        //     newArr[i]+=queries[a][2];
        // }
        newArr[queries[a][0]-1]+=queries[a][2];
        newArr[queries[a][1]]-=queries[a][2];
    }
    let prev = 0;
    let max = 0;
    for(let i = 0; i<newArr.length; i++){
        newArr[i]+=prev;
        prev = newArr[i];
        if(newArr[i]>max) max = newArr[i];
    }
    return max;
}
