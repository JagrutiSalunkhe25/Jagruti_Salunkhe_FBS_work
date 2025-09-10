class Car
{

	int model;
	int year;
        double price;
	String brand;

	void setMod(int m)
	{
		this.model=m;
	}
	void setYr(int y)
	{
		this.year=y;
	}
	void setPri(double p)
	{
		this.price=p;
	}
	void setBrnd(String s)
	{
		this.brand=s;
	}

	int getMod()
	{
		return this.model;
	}
	int getYear()
	{
		return this.year;
	}
	double getPrice()
	{
		return this.price;
	}
	String getBrand()
	{
		return this.brand;
	}

	Car()
	{
		this.model=31;
		this.year=2023;
		this.price=400000;
		this.brand="Mahindra";
		System.out.println("default constructor");
	}

	Car(int m,int y,double p,String b)
	{
		this.model=m;
		this.year=y;
		this.price=p;
		this.brand=b;
		System.out.println("parameterized constructor");
	}

	void display()
	{
		System.out.println("model of car is :"+this.model);
		System.out.println("year of car buy :"+this.year);
		System.out.println("price of car is :"+this.price);
		System.out.println("brand of car is :"+this.brand);
	}

}

class Test
{
 	public static void main(String[] a)
	{
		Car c1=new Car();
		c1.display();
		Car c2=new Car(102,2020,500000,"Tata");
		c2.display();
	}
}