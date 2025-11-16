int Min(int A, int B);
void ProcessInitialization(int *&pMatrix, int *&pProcRows, int& Size,
int& RowNum);
void ProcessInitializationTest(int *&pMatrix, int *&pProcRows, int& Size,
int& RowNum);
void ProcessTermination(int *pMatrix, int *pProcRows);
void DummyDataInitialization(int *pMatrix, int Size);
void DataDistribution(int *pMatrix, int *pProcRows, int Size, int RowNum);
void ResultCollection(int *pMatrix, int *pProcRows, int Size, int RowNum);
void ParallelFloyd(int *pProcRows, int Size, int RowNum);
void RowDistribution(int *pProcRows, int Size, int RowNum, int k, int *pRow);
void ParallelPrintMatrix(int *pProcRows, int Size, int RowNum);
void TestDistribution(int *pMatrix, int *pProcRows, int Size, int RowNum);
void TestResult(int *pMatrix, int *pSerialMatrix, int Size);
void RandomDataInitialization(int *pMatrix, int Size);
void CopyMatrix(int *pMatrix, int Size, int *pMatrixCopy);
bool CompareMatrices(int *pMatrix1, int *pMatrix2, int Size);
void SerialFloyd(int *pMatrix, int Size);
void PrintMatrix(int *pMatrix, int RowCount, int ColCount);

int Min(int A, int B);
void ProcessInitialization(int *&pMatrix, int& Size);
void ProcessInitializationTest(int *&pMatrix, int& Size);
void ProcessTermination(int *pMatrix);
void DummyDataInitialization(int *pMatrix, int Size);
void RandomDataInitialization(int *pMatrix, int Size);
void SerialFloyd(int *pMatrix, int Size);
