#ifndef _TEST_HPP_
#define _TEST_HPP_
class A{
	public:
		int a;
	private:
		int b;
    public:
        void setb(int m);
        int getb();
};
void A::setb(int m){
    b=m;
}
int A::getb(){
    return b;
}
#endif