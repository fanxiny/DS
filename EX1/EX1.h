// 定义复数数据结构
typedef struct tagComplex
{
	float fReal;
	float fImage;
} Complex, *LPComplex;

// 给复数赋值
int AssignComplex( Complex *psCpx, float fReal, float fImage );

// 创建复数
LPComplex CreateComplex();

// 销毁复数
void DestroyComplex(LPComplex *psCpx);

// 获取复数的实部值
float GetReal( Complex sCpx );

// 获取复数的虚部值
int GetImage( Complex sCpx, float *pImage );

// 计算两个复数的和
int AddComplex( Complex sCpx1, Complex sCpx2, Complex *psSum );

// 计算两个复数的差
int Subtract(Complex sCpx1, Complex sCpx2, Complex *psSub);

// 计算两个复数的积
int  Multiply(Complex sCpx1, Complex sCpx2, Complex *psmult);

// 计算两个复数的商
int   Divide(Complex sCpx1, Complex sCpx2, Complex *psdiv);
