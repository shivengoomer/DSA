//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.evenlyDivides(N));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static int evenlyDivides(int n) {
        int ct=0;
        int temp=n;
        while(temp>0){
            int a=temp%10;
            if(a==0){
                temp/=10;
                continue;}
            if(n%a==0){
                ct++;
            }
            temp=temp/10;
       
        }
        return ct;   
    }
        
}