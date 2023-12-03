##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug_MacOS
ProjectName            :=FlaxLauncherLite
ConfigurationName      :=Debug_MacOS
WorkspaceConfiguration :=Debug_MacOS
WorkspacePath          :=/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite
ProjectPath            :=/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/FlaxLauncherLite
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Matt Runion
Date                   :=03/12/2023
CodeLitePath           :=/Users/mrunion/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=/Applications/Xcode.app/Contents/Developer/usr/bin/g++
SharedObjectLinkerName :=/Applications/Xcode.app/Contents/Developer/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=../build-$(WorkspaceConfiguration)/FlaxLauncherLite/$(ProjectName).app/Contents/MacOS
OutputFile             :=../build-$(WorkspaceConfiguration)/FlaxLauncherLite/$(ProjectName).app/Contents/MacOS/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            := $(shell /Users/mrunion/wxWidgets/build-cocoa-debug/wx-config —libs) -L/Users/mrunion/wxWidgets/build-cocoa-debug/lib   -framework IOKit -framework Carbon -framework Cocoa -framework QuartzCore -framework AudioToolbox -framework System -framework OpenGL -lwx_osx_cocoau_xrc-3.3 -lwx_osx_cocoau_html-3.3 -lwx_osx_cocoau_qa-3.3 -lwx_osx_cocoau_core-3.3 -lwx_baseu_xml-3.3 -lwx_baseu_net-3.3 -lwx_baseu-3.3
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /Applications/Xcode.app/Contents/Developer/usr/bin/g++
CC       := /Applications/Xcode.app/Contents/Developer/usr/bin/gcc
CXXFLAGS := -std=c++20 $(shell /Users/mrunion/wxWidgets/build-cocoa-debug/wx-config —cxxflags) -O0 -gdwarf-2 -std=c++20 -Wall -I/Users/mrunion/wxWidgets/build-cocoa-debug/lib/wx/include/osx_cocoa-unicode-3.3 -I/Users/mrunion/wxWidgets/include -D_FILE_OFFSET_BITS=64 -DWXUSINGDLL -D__WXMAC__ -D__WXOSX__ -D__WXOSX_COCOA__ $(Preprocessors)
CFLAGS   := -std=c++11 $(shell /Users/mrunion/wxWidgets/build-cocoa-debug/wx-config —cflags) -O0 -gdwarf-2 -std=c++11 -Wall -I/Users/mrunion/wxWidgets/build-cocoa-debug/lib/wx/include/osx_cocoa-unicode-3.3 -I/Users/mrunion/wxWidgets/include -D_FILE_OFFSET_BITS=64 -DWXUSINGDLL -D__WXMAC__ -D__WXOSX__ -D__WXOSX_COCOA__ $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/FlaxProjectDlg.cpp$(ObjectSuffix) $(IntermediateDirectory)/FlaxEngineDlg.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

PostBuild:
	@echo Executing Post Build commands ...
	cp -f images/*.png '$(IntermediateDirectory)/$(ProjectName).app/Contents/Resources/'
	@echo Done

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
PrePreBuild: $(IntermediateDirectory)/$(ProjectName).app/Contents/Info.plist $(IntermediateDirectory)/$(ProjectName).app/Contents/Resources/FlaxLauncherLite.icns
## rule to copy the Info.plist file into the bundle
$(IntermediateDirectory)/$(ProjectName).app/Contents/Info.plist: Info.plist
	mkdir -p '$(IntermediateDirectory)/$(ProjectName).app/Contents' && cp -f Info.plist '$(IntermediateDirectory)/$(ProjectName).app/Contents/Info.plist'
## rule to copy the icon file into the bundle
$(IntermediateDirectory)/$(ProjectName).app/Contents/Resources/FlaxLauncherLite.icns: FlaxLauncherLite.icns
	mkdir -p '$(IntermediateDirectory)/$(ProjectName).app/Contents/Resources/' && cp -f FlaxLauncherLite.icns '$(IntermediateDirectory)/$(ProjectName).app/Contents/Resources/FlaxLauncherLite.icns'

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix): wxcrafter.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/wxcrafter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix): wxcrafter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix) wxcrafter.cpp

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix): wxcrafter_bitmaps.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/wxcrafter_bitmaps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix): wxcrafter_bitmaps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix) wxcrafter_bitmaps.cpp

$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix): MainFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/MainFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix): MainFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix) MainFrame.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/FlaxProjectDlg.cpp$(ObjectSuffix): FlaxProjectDlg.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/FlaxProjectDlg.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FlaxProjectDlg.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FlaxProjectDlg.cpp$(PreprocessSuffix): FlaxProjectDlg.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FlaxProjectDlg.cpp$(PreprocessSuffix) FlaxProjectDlg.cpp

$(IntermediateDirectory)/FlaxEngineDlg.cpp$(ObjectSuffix): FlaxEngineDlg.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/FlaxEngineDlg.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FlaxEngineDlg.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FlaxEngineDlg.cpp$(PreprocessSuffix): FlaxEngineDlg.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FlaxEngineDlg.cpp$(PreprocessSuffix) FlaxEngineDlg.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


