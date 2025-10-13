
package p2;
import p1.Bank;

import p4.Transaction;
import java.util.Date;

public abstract class Account {
	String UserName;
	int AccNo;
	
     String accType;
     Date accOpenDate;
    protected double balance;
    protected Transaction[] transactions;
    protected int transactionCount;
    protected Bank user;
  


    public Account(String accType, Date accOpenDate, double balance ,Bank user) {
        this(accType, accOpenDate,50, balance,user);
    }

    public Account(String accType, Date accOpenDate, int maxTransactions, double balance,Bank user) {
        this.accType = accType;
        this.accOpenDate = accOpenDate;
        this.transactions = new Transaction[maxTransactions];
        this.transactionCount = 0;
        this.balance = balance;
        this.user=user;
    }

   
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            addTransaction(new Transaction(transactionCount + 1, new Date(), "Deposit", amount, "Deposited"));
            System.out.println("Deposited: " + amount + "  New Balance: " + balance);
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }

    
    public abstract void withdraw(double amount);

  
    public void addTransaction(Transaction t) {
        if (transactionCount < transactions.length) {
            transactions[transactionCount++] = t;
        } else {
            System.out.println("Transaction limit reached!");
        }
    }

   
    public void showTransactions() {
        if (transactionCount == 0) {
            System.out.println("No transactions yet.");
            return;
        }
        for (int i = 0; i < transactionCount; i++) {
            transactions[i].display();
        }
    }

    
    public abstract void accountInfo();

   
    public String getAccType() {
        return accType;
    }

    public void setAccType(String accType) {
        this.accType = accType;
    }

    public Date getAccOpenDate() {
        return accOpenDate;
    }

    public void setAccOpenDate(Date accOpenDate) {
        this.accOpenDate = accOpenDate;
    }

    public Transaction[] getTransactions() {
        return transactions;
    }

    public void setTransactions(Transaction[] transactions) {
        this.transactions = transactions;
    }

    public int getTransactionCount() {
        return transactionCount;
    }

    public void setTransactionCount(int transactionCount) {
        this.transactionCount = transactionCount;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

   
    public String toString() {
        return "Account [Type=" + accType + ", OpenDate=" + accOpenDate + ", Balance=" + balance + "]";
    }
}
