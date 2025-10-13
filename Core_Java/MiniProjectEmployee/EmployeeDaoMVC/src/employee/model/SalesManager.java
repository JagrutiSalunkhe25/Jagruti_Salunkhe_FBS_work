package employee.model;



public class SalesManager extends Employee {
    int target;
    double incentive;

    public SalesManager() {
        super();
        this.target = 0;
        this.incentive = 0;
    }

    public SalesManager(int id, String name, double salary, int target, double incentive) {
        super(id, name, salary);
        this.target = target;
        this.incentive = incentive;
    }

   
    int getTarget() {
		return target;
	}

	void setTarget(int target) {
		this.target = target;
	}

	double getIncentive() {
		return incentive;
	}

	void setIncentive(double incentive) {
		this.incentive = incentive;
	}

	@Override
    public double calculateSalary() {
        return this.getSalary() + (this.target * this.incentive);
    }

    @Override
    public String toString() {
        return super.toString() + "\nTarget: " + target + "\nIncentive: " + incentive;
    }
}
