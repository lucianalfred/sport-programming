import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String scales = scanner.nextLine();
        String remaining = scanner.nextLine();

        int pipePos = scales.indexOf('|');

        String left = scales.substring(0, pipePos);

        String right = scales.substring(pipePos + 1);

        int leftSize = left.length();
        int rightSize = right.length();
        int remainingSize = remaining.length();

        int totalSize = leftSize + rightSize + remainingSize;

        if (totalSize % 2 != 0) {
            System.out.println("Impossible");
            return;
        }

        int halfSize = totalSize / 2;

        int needLeft = halfSize - leftSize;
        int needRight = halfSize - rightSize;

        if (needLeft < 0 || needRight < 0 || needLeft + needRight != remainingSize) {
            System.out.println("Impossible");
            return;
        }

        String result = left +
                remaining.substring(0, needLeft) +
                "|" +
                right +
                remaining.substring(needLeft);

        System.out.println(result);
    }
}