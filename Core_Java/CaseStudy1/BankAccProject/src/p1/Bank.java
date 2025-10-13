    
package p1;


public class Bank {
	
	String accHolder;
     int accNo;
     String ifsc;
     String address;
     double currentBalance;
     String branch;
     double income;
     int cibilScore;

    public Bank() {
    	
    }
    
    

    public Bank(String accHolder, int accNo, String ifsc, String address) {
		super();
		this.accHolder = accHolder;
		this.accNo = accNo;
		this.ifsc = ifsc;
		this.address = address;
	}



//	public Bank(int accNo, String accHolder, String ifsc, String address, double currentBalance, String branch) {
//        this.accNo = accNo;
//        this.accHolder = accHolder;
//        this.ifsc = ifsc;
//        this.address = address;
//        this.currentBalance = currentBalance;
//        this.branch = branch;
//    }
    
    

    

    

	public Bank(String accHolder, int accNo, String ifsc, String address, double currentBalance, String branch, double income,int cibilScore) {
		super();
		this.accHolder = accHolder;
		this.accNo = accNo;
		this.ifsc = ifsc;
		this.address = address;
		this.currentBalance = currentBalance;
		this.branch = branch;
		this.income = income;
		this.cibilScore = cibilScore;
  }


	int getAccNo() {
		return accNo;
	}

	void setAccNo(int accNo) {
		this.accNo = accNo;
	}

	String getIfsc() {
		return ifsc;
	}

	void setIfsc(String ifsc) {
		this.ifsc = ifsc;
	}

	String getAccHolder() {
		return accHolder;
	}

	void setAccHolder(String accHolder) {
		this.accHolder = accHolder;
	}

	String getAddress() {
		return address;
	}

	void setAddress(String address) {
		this.address = address;
	}

	double getCurrentBalance() {
		return currentBalance;
	}

	void setCurrentBalance(double currentBalance) {
		this.currentBalance = currentBalance;
	}

	String getBranch() {
		return branch;
	}

	void setBranch(String branch) {
		this.branch = branch;
	}
	
	
	
	 public double getIncome() {
		return income;
	}



	void setIncome(double income) {
		this.income = income;
	}



	public int getCibilScore() {
		return cibilScore;
	}



	void setCibilScore(int cibilScore) {
		this.cibilScore = cibilScore;
	}



//	 public void accountInfo() {
//	        this.display();
//	    }
//
//	
//	void display()
//	{
//		System.out.println("customer name :"+accHolder+ "acc no : "+accNo+ "ifsc : "+ifsc+ " address: "+address );
//	}

	
    public String toString() {
		return "Customer [Name=" + accHolder + ", AccNo=" + accNo + ", IFSC=" + ifsc +
	               ", Address=" + address + ", Income=" + income + ", CIBIL=" + cibilScore + "]";
    }
}
