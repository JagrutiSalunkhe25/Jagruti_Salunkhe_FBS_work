class BankAccount
{
	int accno;
	String hname;
	double bal;
	String branch;

	void setAccno(int a)
	{
		this.accno=a;
	}
	void setHname(String h)
	{
		this.hname=h;
	}
	void setBal(double b)
	{
		this.bal=b;
	}
	void setBranch(String br)
	{
		this.branch=br;
	}

	int getAccno()
	{
		return this.accno;
	}
	String getHname()
	{
		return this.hname;
	}
	double getBal()
	{
		return this.bal;
	}
	String getBranch()
	{
		return this.branch;
	}

	BankAccount()
	{
		this.accno=123;
	    this.hname="ajay";
	    this.bal=100000;
        this.branch="shirpur";

		System.out.println("default constructor");
	}

    BankAccount(int a,String h,double b,String brch)
	{
		this.accno=a;
	    this.hname=h;
	    this.bal=b;
        this.branch=brch;

		System.out.println("parameterized constructor");
	}

	void display()
	{
		System.out.println("Account number is :"+this.accno);
		System.out.println("Holder name is :"+this.hname);
		System.out.println("Balance is :"+this.bal);
		System.out.println("Branch is :"+this.branch);
	}
}

class Test
{
	public static void main(String[] args)
	{
		BankAccount b1=new BankAccount();
		b1.display();
		BankAccount b2=new BankAccount(456,"jagss",50000,"pune");
		b2.display();
	}
}
