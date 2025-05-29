package GameDevelopment;

import java.util.Random;
import java.util.Scanner;

import javax.sql.rowset.JoinRowSet;

public class GuessNumber 
{
	private static final int MAX_ATTEMPT = 5;
	private static final int MAX_NUMBER = 100;
	private static final Random r = new Random();
	private static final Scanner sc = new Scanner(System.in);
	
	public static void main(String[] args) 
	{
		int score = 0;
		int NoOfRound = 0;
		
		while(true) 
		{
			int NoToGuess = generateRandomNo();
			int attempt = playRound(NoToGuess);
			
			if(attempt > 0) 
			{
				score += MAX_ATTEMPT - attempt + 1;
				NoOfRound++;
				
			}
			if(!playAgain()) 
			{
				break;
			}
			
		}
		showfinalScore(score , NoOfRound);
		
 	}
	private static int generateRandomNo() 
	{
		return r.nextInt(MAX_NUMBER) + 1;
	}
	private static int playRound(int noToGuess) {
		int attempt = 0;
		
		System.out.println("----------------------------------------------------------------------------------------------------------");
		System.out.println("                                   **Welcome to Guess Number Game**                   ");
		System.out.println("----------------------------------------------------------------------------------------------------------");
		
		System.out.println("Please follow the Game Instructuion ::");
		System.out.println("1> You have to enter the number ::");
		System.out.println("2> You will have only 05 chance to guess the number ::");
		System.out.println("3> When you will enter the number it will give you two option which is LowNo and HighNo ::");
		System.out.println("4> LowNo means the number which you have enter you can't guess low number from it ::");
		System.out.println("5> HighNo means the number which you have enter you can't guess high number from it ::");
		System.out.println("LET START THE GAM11E NOW:: ");
		
		
		
		
		while(attempt < MAX_ATTEMPT)
		{
			int no = getGuess();
			attempt++;
			
			if(no < noToGuess) 
			{
				System.out.println("Low No :: Try Again...");
			}
			else if (no > noToGuess) 
			{
				System.out.println("High No :: Try Again...");
			}
			else 
			{
				System.out.println("Congratulation! You have guessed the number in "+attempt);
				return attempt;
			}
		}
		System.out.println("You didn't guess the number. The number was "+noToGuess+"...");
		return 0;
		
		
	}
	private static int getGuess() {
		while(true) 
		{
			try {
				System.out.println("Enter the No : ");
				return sc.nextInt();
				
			} catch (Exception e) 
			{
				System.out.println("Invalid input. Please enter a number...");
				sc.next();
				
			}
		}
	}
	private static boolean playAgain() 
	{
		System.out.println("Do you want to Play Again ? (Yes/No) : ");
		String reply = sc.next();
		
		if(reply.equalsIgnoreCase("Yes") || reply.equalsIgnoreCase("yes") || reply.equalsIgnoreCase("YES")) 
		{
			return true;
			
		}
		else if (reply.equalsIgnoreCase("No") || reply.equalsIgnoreCase("no") || reply.equalsIgnoreCase("NO")) 
		{
			return false;
			
		}
		else 
		{
			System.out.println("Invalid Input... Please enter 'Yes' Or 'No' only.");
		}
		return false;
	}


	private static void showfinalScore(int score, int noOfRound) 
	{
		System.out.println("You played "+noOfRound+ " Round and Scored "+score+" Points.");
		System.out.println("                        --------------------------------------------------------    ");
		System.out.println("                        | Game Over!!!! Thank You Have A Good Time With You....|                      ");
		System.out.println("                        --------------------------------------------------------   ");
		
	}	
}
