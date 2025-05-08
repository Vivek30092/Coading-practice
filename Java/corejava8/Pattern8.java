
import java.util.Scanner;
public class Pattern8 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num;
        int n = 1;
        System.out.print("enter number of rows : ");
        num = sc.nextInt();
        for(int i = 1;i<=num;i++){
            for(int j = 1;j<= i;j++){
                System.out.print(n+" ");
                n++;
            }
        System.out.println();
        }
    }    
}
