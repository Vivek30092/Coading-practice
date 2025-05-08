
import java.util.Scanner;
public class Pattern7 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num;
        System.out.print("enter number : ");
        num = sc.nextInt();
        for(int i = 1; i<=num;i++){
            for(int j = 1; j<=(num-i+1);j++){
                System.out.print(j);
            }
        System.out.println();
        }
    }    
}
