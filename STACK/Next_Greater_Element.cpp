public static long[] nextLargerElement(long[] array, int n)
    { 
        Stack<Integer> stack = new Stack<>();
        long[] res = new long[array.length];
        for(int i=0;i<n;i++){
            while(!stack.isEmpty() && array[stack.peek()]<array[i]){
                res[stack.peek()]= array[i];
                stack.pop();
            }

            stack.push(i);

        }
        while(!stack.isEmpty()){
            res[stack.pop()]=-1;
        }
        return  res;
    } 
