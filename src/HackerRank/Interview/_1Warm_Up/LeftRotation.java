package HackerRank.Interview._1Warm_Up;
import  java.util.*;
import java.io.*;
public class LeftRotation {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        int n = Integer.parseInt(str[0]); int r = Integer.parseInt(str[1]);
        String[] sArr = br.readLine().split(" ");
        int[] arr = new int[n];
        for(int i=0;i<n;i++) arr[i] = Integer.parseInt(sArr[i]);
        System.out.println(Arrays.toString(arr)); //debugging
        while(r-->0){
            int i;
            int temp = arr[0];
            for ( i = 0; i < n-1; i++) {
                arr[i] = arr[i + 1];
            }
            arr[i] = temp;
        }
        for(int x : arr) System.out.print(x+" ");
    }
}
