package p3;
import p2.Account;
import p4.Transaction;
import java.util.Date;

import p1.Bank;

public class Loan extends Account {
     double loanAmount;
     double interestRate;

    public Loan(Date accOpenDate, double loanAmount,Bank user) {
        super("Loan", accOpenDate, 20, -loanAmount,user);
        this.loanAmount = loanAmount;
        this.interestRate = 6.5;
    }

   
   
    public void withdraw(double amount) {
        System.out.println("no withdrawals in a Loan Account!");
    }

    
   
    public void deposit(double amount) {
        if(amount > 0) {
            balance += amount;  
            System.out.println("Repaid: " + amount + "  remaining Loan Balance: " + balance);
        } else {
            System.out.println("Invalid repayment amount!");
        }
    }

    
    public void applyInterest() {
        if(balance < 0) {
            double interest = Math.abs(balance) * (interestRate / 100 / 12);
            balance -= interest;
            System.out.println("Interest added: " + interest + "  New Balance: " + balance);
        }
    }
    
    public static boolean isEligible(Bank user, double requestedAmount) {
        double income = user.getIncome();
        int cibil = user.getCibilScore();

        if (cibil < 300) {
            System.out.println("Loan Rejected: CIBIL score too low (" + cibil + ")");
            return false;
        }

        if (income >= 20000 && income < 50000 && requestedAmount <= 200000) return true;
        else if (income >= 50000 && income < 100000 && requestedAmount <= 400000) return true;
        else if (income >= 100000 && requestedAmount <= 800000) return true;
        else {
            System.out.println("Loan Rejected: Requested amount exceeds eligibility for your income.");
            return false;
        }
    }

  
    public void accountInfo() {
        System.out.println(this.toString());
    }

    

	double getLoanAmount() {
		return loanAmount;
	}


	void setLoanAmount(double loanAmount) {
		this.loanAmount = loanAmount;
	}


	double getInterestRate() {
		return interestRate;
	}


	public static void setInterestRate(double interestRate) {
		interestRate = interestRate;
	}


	public String toString() {
		return "Loan [loanAmount=" + loanAmount + ", interestRate=" + interestRate +"%, remaining Balance=" + balance +" || "+user+ "]";
	}

    
    
}
