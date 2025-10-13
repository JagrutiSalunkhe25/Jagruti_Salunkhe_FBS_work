package p3;
import p2.Account;
import p4.Transaction;
import java.util.Date;

import java.util.Date;
import java.util.concurrent.TimeUnit;

import p1.Bank;

public class Salary extends Account {
     boolean freeze;

    public Salary(Date accOpenDate, double balance,Bank user) {
        super("Salary", accOpenDate, 10, balance,user);
        this.freeze = false; 
    }

    
 
    boolean isFreeze() {
		return freeze;
	}



	void setFreeze(boolean freeze) {
		this.freeze = freeze;
	}



	public void checkFreezeStatus() {
        if(transactionCount == 0) {
            
            freeze = true;
            return;
        }

        
        Date lastDate = transactions[transactionCount - 1].gettDate();
        Date today = new Date();

        
        long diffInMs = today.getTime() - lastDate.getTime();
        long diffInDays = TimeUnit.MILLISECONDS.toDays(diffInMs);

        if(diffInDays >= 60) {   
            freeze = true;
        } else {
            freeze = false;
        }
    }

   
    public void withdraw(double amount) {
        
        checkFreezeStatus();

        if(freeze) {
            System.out.println("Account is freeze !!");
        } else if(balance - amount >= 0) {
            balance -= amount;
            addTransaction(new Transaction(transactionCount+1, new Date(), "Withdraw", amount, "Salary withdraw"));
            System.out.println("Withdrawn: " + amount + " | New Balance: " + balance);
        } else {
            System.out.println("Insufficient funds in Salary Account!");
        }
    }

  
    public void accountInfo() {
        System.out.println(this.toString());
    }

  
    public String toString() {
        return "Salary Account [Balance=" + balance + ", Freeze=" + freeze + " || "+user+"]";
    }
}
