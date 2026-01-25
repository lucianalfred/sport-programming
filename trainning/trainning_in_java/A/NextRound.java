import java.util.Scanner;

public class NextRound {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] scores = new int[n];

        for (int i = 0; i  < n; i++){
            scores[i] = scanner.nextInt();
        }

        int  cutoffScore = scores[k - 1];
        int advancers = 0;
    
        for (int i = 0; i < n; i++){
            if (scores[i] >= cutoffScore && scores[i] > 0){
                advancers++;
            }
        }

        System.out.println(advancers);
    }
}
