#if !defined(__CINT__)
#include "TROOT.h"
#endif
#include "Bfc.h"
TDataSet *CreateTable() { 
  if (!gROOT->GetClass("St_Bfc")) return 0;
  St_Bfc *tableSet = new St_Bfc("BFC",NoChainOptions); 
  for (Int_t i = 0; i < NoChainOptions; i++) {
    tableSet->AddAt(&BFC[i]);
  }
  return tableSet;
}
