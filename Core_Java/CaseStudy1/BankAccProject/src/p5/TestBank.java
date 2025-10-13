package p5;
import p3.*;  
import p2.Account;
import java.util.*;

import p1.Bank;

public class TestBank {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Account> accounts = new ArrayList<>();

    
        Saving.setInterestRate(5.0);  
        Loan.setInterestRate(10.0);
        
        System.out.println("Enter User Details:");
        System.out.print("Enter Name: ");
//        sc.nextLine(); 
        String name = sc.nextLine();  
        System.out.print("Enter acc Number: ");
        int accno = sc.nextInt();
        System.out.print("Enter ifsc code: ");
        String ifsc = sc.next();
        System.out.print("Enter  address : ");
        sc.nextLine(); 
        String address = sc.nextLine();
        System.out.print("Enter monthly Income: ");
        double income = sc.nextDouble();
        System.out.print("Enter CIBIL Score: ");
        int cibil = sc.nextInt();

        Bank user = new Bank( name, accno, ifsc, address);


        while (true) {
            System.out.println("\n====== BANK MENU ======");
            
            System.out.println("1. Open Account");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Apply Interest (Savings/Loan)");
            System.out.println("5. Check Freeze (Salary only)");
            System.out.println("6. Show All Accounts + Transactions");
            System.out.println("7. Exit");
            System.out.print("Enter choice: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1: 
                	
                    System.out.println("Select Account Type:");
                    System.out.println("1. Savings");
                    System.out.println("2. Salary");
                    System.out.println("3. Current");
                    System.out.println("4. Loan");
                    int type = sc.nextInt();

                    switch (type) {
                        case 1:
                            System.out.print("Enter opening balance: ");
                          
                            double sbal = sc.nextDouble();
                            if(sbal>Saving.minBalance) {
                            accounts.add(new Saving(new Date(), sbal, user ));
                            System.out.println("Savings Account Created!");
                            }
                            else {
                            System.out.println("amount should be greater than min balance requirement !");
                            }
                            break;

                        case 2:
                            System.out.print("Enter salary balance: ");
                            double salBal = sc.nextDouble();
                            accounts.add(new Salary(new Date(), salBal,user));
                       
                            System.out.println("Salary Account Created!");
                            break;

                        case 3:
                            System.out.print("Enter opening balance: ");
                            double cBal = sc.nextDouble();
                            System.out.print("Enter overdraft limit: ");
                            double limit = sc.nextDouble();
                            accounts.add(new Current(new Date(), cBal, limit,user));
                            System.out.println("Current Account Created!");
                            break;

                        case 4:
                        	System.out.print("Enter loan amount: ");
                            double loanAmt = sc.nextDouble();
                            if (Loan.isEligible(user, loanAmt)) {
                                accounts.add(new Loan(new Date(), loanAmt, user));
                                System.out.println(" Loan Account Created Successfully!");
                            } else {
                                System.out.println(" Loan creation failed due to eligibility criteria.");
                            }
                            break;

                        default:
                            System.out.println("Invalid account type!");
                    }
                    break;

                case 2: 
                    if (accounts.isEmpty()) {
                        System.out.println("No accounts exist!");
                        break;
                    }
                   showAccounts(accounts);
                    System.out.print("Choose account index: ");
                    int dIdx = sc.nextInt();
                    if (isValid(dIdx, accounts)) {
                        System.out.print("Enter deposit amount: ");
                        double dep = sc.nextDouble();
                        accounts.get(dIdx).deposit(dep);
                    }
                    break;

                case 3: 
                    if (accounts.isEmpty()) {
                        System.out.println("No accounts exist!");
                        break;
                    }
                   showAccounts(accounts);
                    System.out.print("Choose account index: ");
                    int wIdx = sc.nextInt();
                    if (isValid(wIdx, accounts)) {
                        System.out.print("Enter withdraw amount: ");
                        double wd = sc.nextDouble();
                        accounts.get(wIdx).withdraw(wd);
                    }
                    break;

                case 4: 
                    if (accounts.isEmpty()) {
                        System.out.println("No accounts exist!");
                        break;
                    }
                    showAccounts(accounts);
                    System.out.print("Choose account index: ");
                    int iIdx = sc.nextInt();
                    if (isValid(iIdx, accounts)) {
                        Account acc = accounts.get(iIdx);
                        if (acc instanceof Saving) {
                            ((Saving) acc).applyInterest();
                        } else if (acc instanceof Loan) {
                            ((Loan) acc).applyInterest();
                        } else {
                            System.out.println("Interest not applicable for this account.");
                        }
                    }
                    break;

                case 5: 
                    if (accounts.isEmpty()) {
                        System.out.println("No accounts exist!");
                        break;
                    }
                    showAccounts(accounts);
                    System.out.print("Choose account index: ");
                    int fIdx = sc.nextInt();
                    if (isValid(fIdx, accounts)) {
                        Account acc1 = accounts.get(fIdx);
                        if (acc1 instanceof Salary) {
                            ((Salary) acc1).checkFreezeStatus();
                        } else {
                            System.out.println("Freeze check only for Salary accounts!");
                        }
                    }
                    break;

                case 6: 
                    if (accounts.isEmpty()) {
                        System.out.println("No accounts exist!");
                        break;
                    }
                    System.out.println("\n==== All  Transactions ====");
                    for (Account a : accounts) {
                        a.accountInfo();
                        a.showTransactions();
                        System.out.println("---------------------------------");
                    }
                    break;

                case 7:
                    System.out.println("Thank you for using the Bank System!");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid choice! Try again.");
            }
        }
    }

  
     static void showAccounts(List<Account> accounts) {
        for (int i = 0; i < accounts.size(); i++) {
            System.out.println(i + " -> " + accounts.get(i).getClass().getSimpleName()
                    + " | Balance: " + accounts.get(i).getBalance());
        }
    }

     static boolean isValid(int idx, List<Account> accounts) {
        if (idx < 0 || idx >= accounts.size()) {
            System.out.println("Invalid account index!");
            return false;
        }
        return true;
    }
}
