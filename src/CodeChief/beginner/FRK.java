package CodeChief.beginner;

import java.io.IOException;
import java.util.*;

public class FRK {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String s = "chief";
        Vector<String> subString = new Vector<String>();
        for(int i=0;i<s.length()+1;i++)
            for(int j=i+1;j<s.length()+1;j++)
                if(s.substring(i,j).length()>=2)subString.add(s.substring(i,j));
//        System.out.println(subString); //debugging
//        System.out.println(subString.size());

        int n =sc.nextInt();
        String[] arr = new String[n];
        int count=0;
        for(int i=0;i<n;i++) {
            arr[i] = sc.next();
            for(int j=0;j<subString.size() ;j++){
              if(arr[i].contains(subString.get(j))) {
//                  System.out.println(arr[i].contains(subString.get(j)));
                  count++;
//                  System.out.println(count);
                  break;
              }
            }
        }
        System.out.println(count);

    }
}
