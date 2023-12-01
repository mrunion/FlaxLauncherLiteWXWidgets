##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=FlaxLauncherLite
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite
ProjectPath            :=/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/FlaxLauncherLite
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Matt Runion
Date                   :=01/12/2023
CodeLitePath           :=/Users/mrunion/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
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
LinkOptions            :=  -L/opt/homebrew/lib -framework IOKit -framework Carbon -framework Cocoa -framework QuartzCore -framework AudioToolbox -framework System -framework OpenGL -lwx_osx_cocoau_xrc-3.2 -lwx_osx_cocoau_html-3.2 -lwx_osx_cocoau_qa-3.2 -lwx_osx_cocoau_core-3.2 -lwx_baseu_xml-3.2 -lwx_baseu_net-3.2 -lwx_baseu-3.2
IncludePath            := $(IncludeSwitch)/opt/homebrew/lib/wx/include/osx_cocoa-unicode-3.2 $(IncludeSwitch)/opt/homebrew/include/wx-3.2  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                :=$(LibraryPathSwitch)/opt/homebrew/lib  $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS :=  -O0 -gdwarf-2 -std=c++11 -Wall -I/opt/homebrew/lib/wx/include/osx_cocoa-unicode-3.2 -I/opt/homebrew/include/wx-3.2 -D_FILE_OFFSET_BITS=64 -DWXUSINGDLL -D__WXMAC__ -D__WXOSX__ -D__WXOSX_COCOA__ $(Preprocessors)
CFLAGS   :=  -O0 -gdwarf-2 -Wall -I/opt/homebrew/lib/wx/include/osx_cocoa-unicode-3.2 -I/opt/homebrew/include/wx-3.2 -D_FILE_OFFSET_BITS=64 -DWXUSINGDLL -D__WXMAC__ -D__WXOSX__ -D__WXOSX_COCOA__ $(Preprocessors)
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
$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix): wxcrafter.cpp $(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/wxcrafter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix): wxcrafter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix) -MM wxcrafter.cpp

$(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix): wxcrafter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix) wxcrafter.cpp

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix): wxcrafter_bitmaps.cpp $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/wxcrafter_bitmaps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix): wxcrafter_bitmaps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix) -MM wxcrafter_bitmaps.cpp

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix): wxcrafter_bitmaps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix) wxcrafter_bitmaps.cpp

$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix): MainFrame.cpp $(IntermediateDirectory)/MainFrame.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/MainFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MainFrame.cpp$(DependSuffix): MainFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MainFrame.cpp$(DependSuffix) -MM MainFrame.cpp

$(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix): MainFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix) MainFrame.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/FlaxProjectDlg.cpp$(ObjectSuffix): FlaxProjectDlg.cpp $(IntermediateDirectory)/FlaxProjectDlg.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/FlaxProjectDlg.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FlaxProjectDlg.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FlaxProjectDlg.cpp$(DependSuffix): FlaxProjectDlg.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FlaxProjectDlg.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FlaxProjectDlg.cpp$(DependSuffix) -MM FlaxProjectDlg.cpp

$(IntermediateDirectory)/FlaxProjectDlg.cpp$(PreprocessSuffix): FlaxProjectDlg.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FlaxProjectDlg.cpp$(PreprocessSuffix) FlaxProjectDlg.cpp

$(IntermediateDirectory)/FlaxEngineDlg.cpp$(ObjectSuffix): FlaxEngineDlg.cpp $(IntermediateDirectory)/FlaxEngineDlg.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/mrunion/Documents/wxwidgets/FlaxLauncherLite/FlaxLauncherLite/FlaxEngineDlg.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FlaxEngineDlg.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FlaxEngineDlg.cpp$(DependSuffix): FlaxEngineDlg.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FlaxEngineDlg.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/FlaxEngineDlg.cpp$(DependSuffix) -MM FlaxEngineDlg.cpp

$(IntermediateDirectory)/FlaxEngineDlg.cpp$(PreprocessSuffix): FlaxEngineDlg.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FlaxEngineDlg.cpp$(PreprocessSuffix) FlaxEngineDlg.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


