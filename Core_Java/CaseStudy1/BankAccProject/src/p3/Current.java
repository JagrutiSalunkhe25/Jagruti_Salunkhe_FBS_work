package p3;
import p2.Account;
import p4.Transaction;

import java.util.Date;

import p1.Bank;

public class Current extends Account {
     double overdraftLimit;

    public Current(Date accOpenDate, double overdraftLimit, double balance,Bank user) {
        super("Current", accOpenDate, 10, balance,user);
        this.overdraftLimit = overdraftLimit;
    }

    
    
    double getOverdraftLimit() {
		return overdraftLimit;
	}


	void setOverdraftLimit(double overdraftLimit) {
		this.overdraftLimit = overdraftLimit;
	}



	
    public void withdraw(double amount) {
        if(balance - amount >= -overdraftLimit) {
            balance -= amount;
            addTransaction(new Transaction(transactionCount+1, new Date(), "Withdraw", amount, "Current withdraw"));
            System.out.println("Withdrawn: " + amount + "  New Balance: " + balance);
        } else {
            System.out.println("Exceeds overdraft limit.");
        }
    }

   
    public void accountInfo() {
        System.out.println(this.toString());
    }

    
    public String toString() {
        return "Current Account [Balance=" + balance + ", OverdraftLimit=" + overdraftLimit + " || "+user+"]";
    }
}
