package CodeChief;
import java.io.*;

public class CHEFCAKE {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            int n = Integer.parseInt(br.readLine());
            String[] str = br.readLine().split(" ");
            int[] ar = new int[n];
            int mult=1;
            for(int i=0;i<n;i++){
                ar[i] =Integer.parseInt(str[i]);
                mult *= ar[i];
            }
            if(mult%2!=0) System.out.println("YES");
            else System.out.println("NO");

        }
    }
}
