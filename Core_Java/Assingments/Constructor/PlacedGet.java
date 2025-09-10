class PlacedStudent
{
	String comp;     
	double dist;     
	String desg;     

	void setComp(String c)
	{
		this.comp=c;
	}
	void setDist(double d)
	{
		this.dist=d;
	}
	void setDesg(String des)
	{
		this.desg=des;
	}

	String getComp()
	{
		return this.comp;
	}
	double getDist()
	{
		return this.dist;
	}
	String getDesg()
	{
		return this.desg;
	}

	void display()
	{
		System.out.println("Company name is :"+this.comp);
		System.out.println("Distance from home :"+this.dist);
		System.out.println("Designation is :"+this.desg);
	}

	PlacedStudent()
	{
		this.comp="tcs";
		this.dist=5;
		this.desg="developer";
		System.out.println("default constructor");
	}

	PlacedStudent(String c,double d,String de)
	{
		this.comp=c;
		this.dist=d;
		this.desg=de;
		System.out.println("parameterized constructor");
	}
}

class Test
{
	public static void main(String[] args)
	{
		PlacedStudent s1=new PlacedStudent();
		s1.display();
		PlacedStudent s2=new PlacedStudent("promobi",20,"manager");
		s2.display();
	}
}
