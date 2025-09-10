class Admin
{
	int id;
	String name;
	double sal;
	double allw;

	void setId(int i)
	{
		this.id=i;
	}
	void setName(String n)
	{
		this.name=n;
	}
	void setSal(double s)
	{
		this.sal=s;
	}
	void setAllw(double a)
	{
		this.allw=a;
	}

	int getId()
	{
		return this.id;
	}
	String getName()
	{
		return this.name;
	}
	double getSal()
	{
		return this.sal;
	}
	double getAllw()
	{
		return this.allw;
	}

	Admin()
	{
		this.id=5;
		this.name="jagruti";
		this.sal=20000;
		this.allw=3000;

		System.out.println("default constructor");
	}

	Admin(int i,String n,double s,double a)
	{
		this.id=i;
		this.name=n;
		this.sal=s;
		this.allw=a;

		System.out.println("parameterized constructor");
	}

	void display()
	{
		System.out.println("Admin id is :"+this.id);
		System.out.println("Admin name is :"+this.name);
		System.out.println("Admin salary is :"+this.sal);
		System.out.println("Admin allowance is :"+this.allw);
	}
}

class Test
{
	public static void main(String[] args)
	{
		Admin a1=new Admin();
		a1.display();
		Admin a2=new Admin(3,"ketan",30000,2000);
		a2.display();
	}
}
