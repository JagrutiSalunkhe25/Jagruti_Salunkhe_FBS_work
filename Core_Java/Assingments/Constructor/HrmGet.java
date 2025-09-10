class Hrm
{
	int id;
	String name;
	double sal;
	double comm;

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
	void setComm(double c)
	{
		this.comm=c;
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
	double getComm()
	{
		return this.comm;
	}

	void display()
	{
		System.out.println("HRM id is :"+this.id);
		System.out.println("HRM name is :"+this.name);
		System.out.println("HRM salary is :"+this.sal);
		System.out.println("HRM commission is :"+this.comm);
	}

	Hrm()
	{
		this.id=104;
		this.name="Bhavesh";
		this.sal=70000;
		this.comm=10000;
		System.out.println("default constructor");
	}
	Hrm(int i,String n,double s,double c)
	{
		this.id=i;
		this.name=n;
		this.sal=s;
		this.comm=c;
		System.out.println("parameterized constructor");
	}
}

class Test
{
	public static void main(String[] args)
	{
		Hrm h1=new Hrm();
		h1.display();
		Hrm h2=new Hrm(105,"jagruti",50000,15000);
		h2.display();
	}
}
