class Course
{
	int cid;
	String cname;
	int dur;
	double fees;

	void setCid(int i)
	{
		this.cid=i;
	}
	void setCname(String n)
	{
		this.cname=n;
	}
	void setDur(int d)
	{
		this.dur=d;
	}
	void setFees(double f)
	{
		this.fees=f;
	}

	int getCid()
	{
		return this.cid;
	}
	String getCname()
	{
		return this.cname;
	}
	int getDur()
	{
		return this.dur;
	}
	double getFees()
	{
		return this.fees;
	}

	Course()
	{
		this.cid=102;
		this.cname="full stack";
		this.dur=6;
		this.fees=40000;
		System.out.println("default constructor");
	}

	Course(int c,String n,int d,double f)
	{
		this.cid=c;
		this.cname=n;
		this.dur=d;
		this.fees=f;
		System.out.println("parameterized constructor");
	}

	void display()
	{
		System.out.println("Course id is :"+this.cid);
		System.out.println("Course name is :"+this.cname);
		System.out.println("Course duration is :"+this.dur+" months");
		System.out.println("Course fees is :"+this.fees);
	}
}

class Test
{
	public static void main(String[] args)
	{
		Course c1=new Course();
		c1.display();
		Course c2=new Course(107,"data science",9,60000);
		c2.display();
	}
}
