package p3;
import p2.Account;
import p4.Transaction;
import java.util.Date;

import p1.Bank;

public class Saving extends Account {
    public static double minBalance=10000;
     double interestRate;

    public Saving(Date accOpenDate, double balance,Bank user) {
        super("Saving", accOpenDate, 10, balance,user);
             
        this.interestRate = 5.0;     
    }


    
    
    
    double getMinBalance() {
		return minBalance;
	}


	void setMinBalance(double minBalance) {
		this.minBalance = minBalance;
	}


	double getInterestRate() {
		return interestRate;
	}


	public static void setInterestRate(double interestRate) {
		interestRate = interestRate;
	}


	
    public void withdraw(double amount) {
        if(balance - amount >= minBalance) {
            balance -= amount;
            addTransaction(new Transaction(transactionCount+1, new Date(), "Withdraw", amount, "Saving withdraw"));
            System.out.println("Withdrawn: " + amount + "  New Balance: " + balance);
        } else {
            System.out.println("Withdrawal denied! Balance cannot be less than minimum balance: " + minBalance);
        }
    }
	
	 public void applyInterest() {
	        double interest = balance * (interestRate / 100 / 12); 
	        balance += interest;
	        System.out.println("Interest Applied: " + interest + " | New Balance: " + balance);
	    }


   
    public void accountInfo() {
        System.out.println(this.toString());
    }

    
    public String toString() {
        return "Saving Account [Balance=" + balance + ", MinBalance=" + minBalance + ", InterestRate=" + interestRate +" || "+user+ "]";
    }
}
