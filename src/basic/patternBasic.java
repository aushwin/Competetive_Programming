package basic;
import java.io.*;
public class patternBasic {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the rows \n");
        int n = Integer.parseInt(br.readLine());
//        for(int i=0;i<n;i++){
//            for(int j=0;j<i;j++){
//                System.out.print("* ");
//            }
//            System.out.println();
//        }
        int i=0;
        while(i<n){
            int j=0;
            while(j<i){
                System.out.print("* ");
                j++;
            }
            System.out.println("");
            i++;
        }
    }
}
