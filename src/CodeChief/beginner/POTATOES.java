package CodeChief.beginner;
import java.io.*;
public class POTATOES {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            String[] ip = br.readLine().split(" ");
            int firstField = Integer.parseInt(ip[0]) ; int secondField = Integer.parseInt(ip[1]);
            int i = 1;
            while(isPrime((firstField+secondField+i))){
                i++;
            }
            System.out.println(i);

        }
    }

    static boolean isPrime(int n){
        int flag = 0;
        for(int i=2;i<n;i++){
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        return flag != 0;
    }
}
