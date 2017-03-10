// $Id: B4cActionInitialization.cc 68058 2013-03-13 14:47:43Z gcosmo $
//
/// \file B4cActionInitialization.cc
/// \brief Implementation of the B4cActionInitialization class

#include "B4cActionInitialization.hh"
#include "B4PrimaryGeneratorAction.hh"
#include "B4RunAction.hh"
#include "B4cEventAction.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4cActionInitialization::B4cActionInitialization()
 : G4VUserActionInitialization()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

B4cActionInitialization::~B4cActionInitialization()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4cActionInitialization::BuildForMaster() const
{
  SetUserAction(new B4RunAction);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void B4cActionInitialization::Build() const
{
  SetUserAction(new B4PrimaryGeneratorAction);
  SetUserAction(new B4RunAction);
  SetUserAction(new B4cEventAction);
}  

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
