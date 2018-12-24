// HelloRevitCpp.cpp - this is the main DLL file.

#include "stdafx.h"
#include "HelloRevitCpp.h"

using namespace System;
using namespace Autodesk::Revit::ApplicationServices;
using namespace Autodesk::Revit::Attributes;
using namespace Autodesk::Revit::DB;
using namespace Autodesk::Revit::UI;

using namespace HelloRevitCpp;

Result Command::Execute(
  ExternalCommandData^ commandData, 
  String^% message, 
  ElementSet^ elements )
{
  TaskDialog::Show("Hello Revit from C++",
    "This is a task dialogue in HelloRevitCpp.cpp");

  return Autodesk::Revit::UI::Result::Succeeded;
}
