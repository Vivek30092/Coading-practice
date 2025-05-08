import java.util.Scanner;
public class patter1 {
    public static void main(String args[]){
        Scanner scr = new Scanner(System.in);
        int r,c;
        System.out.print("enter number of rows : ");
        r = scr.nextInt();
        System.out.print("enter number of columns : ");
        c = scr.nextInt();
        for (int i = 0;i < r ; i++){
            for (int j = 0;j<c;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


