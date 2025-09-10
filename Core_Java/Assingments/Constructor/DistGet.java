class Distance
{
	int ft;
	int inc;

	void setFt(int f)
	{
		this.ft=f;
	}
	void setInc(int i)
	{
		this.inc=i;
	}

	int getFt()
	{
		return this.ft;
	}
	int getInc()
	{
		return this.inc;
	}

	void display()
	{
		System.out.println("Feet :"+this.ft);
		System.out.println("Inches :"+this.inc);
	}

	Distance()
	{
		this.ft=5;
		this.inc=12;
		System.out.println("default constructor");
	}

	Distance(int f,int i)
	{
		this.ft=f;
		this.inc=i;
		System.out.println("parameterized constructor");
	}
}

class Test
{
	public static void main(String[] args)
	{
		Distance d1=new Distance();
		d1.display();
		Distance d2=new Distance(10,23);
		d2.display();
	}
}
