import java.util.*;

public class Translation {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String str1 = scanner.nextLine();
        String str2 = scanner.nextLine();

        if (str1.length() != str2.length()) {
            System.out.println("NO");
            return;
        }

        int len = str1.length();

        Boolean reverse = true;

      
        for (int i =  0; i  < len; i++) {
            if (str1.charAt(i) != str2.charAt(len - 1 - i)){
                reverse = false;
                break;
            }            
        }
        if (reverse){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
