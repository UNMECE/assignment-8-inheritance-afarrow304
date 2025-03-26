//Electric field class
class Electric_Field:public Field{
	private E;
	public:
	//def cons
	//param cons
	//decons
	//functions
	void calcElecField(double r,double q){
		E=q/4*M_PI*pow(2)*q;
	}
};
