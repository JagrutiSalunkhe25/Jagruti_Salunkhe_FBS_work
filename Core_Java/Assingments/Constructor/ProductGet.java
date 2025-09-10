class Product
{
	int id;
	String name;
	int quantity;
	double price;

	void setId(int i)
	{
		this.id=i;
	}
	void setName(String n)
	{
		this.name=n;
	}
	void setQty(int q)
	{
		this.quantity=q;
	}
	void setPrice(double p)
	{
		this.price=p;
	}

	int getId()
	{
		return this.id;
	}
	String getName()
	{
		return this.name;
	}
	int getQty()
	{
		return this.quantity;
	}
	double getPrice()
	{
		return this.price;
	}

	void display()
	{
		System.out.println("Product id is :"+this.id);
		System.out.println("Product name is :"+this.name);
		System.out.println("Product quantity is :"+this.quantity);
		System.out.println("Product price is :"+this.price);
	}

	Product()
	{
		this.id=102;
		this.name="mobile";
		this.quantity=10;
		this.price=50000;
		System.out.println("default constructor");
	}

	Product(int i,String n,int q,double p)
	{
		this.id=i;
		this.name=n;
		this.quantity=q;
		this.price=p;
		System.out.println("parameterized constructor");
	}
}

class Test
{
	public static void main(String[] args)
	{
		Product p1=new Product();
		p1.display();

		Product p2=new Product(133,"tv",4,200000);
		p2.display();
	}
}
