package employee.model;



public class Admin extends Employee {
    double allowance;

    public Admin() {
        super();
        this.allowance = 0;
    }

    public Admin(int id, String name, double salary, double allowance) {
        super(id, name, salary);
        this.allowance = allowance;
    }

   

    double getAllowance() {
		return allowance;
	}

	void setAllowance(double allowance) {
		this.allowance = allowance;
	}


    public double calculateSalary() {
        return this.getSalary() + this.allowance;
    }

  
    public String toString() {
        return super.toString() + "\nAllowance: " + allowance;
    }
}
