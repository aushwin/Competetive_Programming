package CodeChief.easy;
import java.io.*;
public class NUM239 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bout = new BufferedWriter(new OutputStreamWriter(System.out));
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            String[] ip = br.readLine().split(" ");
            int l = Integer.parseInt(ip[0]); int r = Integer.parseInt(ip[1]);
            int count=0;
            for(int i= l ; i<=r ;i++){
                if(i%10==2) count++;
                else if (i%10==3) count++;
                else if(i%10==9) count++;
            }
            bout.write(String.valueOf(count));
            bout.flush();
        }


    }
}
