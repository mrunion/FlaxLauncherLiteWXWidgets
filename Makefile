.PHONY: clean All

All:
	@echo "----------Building project:[ FlaxLauncherLite - Debug MacOS ]----------"
	@cd "FlaxLauncherLite" && "$(MAKE)" -f  "FlaxLauncherLite.mk" PrePreBuild && "$(MAKE)" -f  "FlaxLauncherLite.mk" && "$(MAKE)" -f  "FlaxLauncherLite.mk" PostBuild
clean:
	@echo "----------Cleaning project:[ FlaxLauncherLite - Debug MacOS ]----------"
	@cd "FlaxLauncherLite" && "$(MAKE)" -f  "FlaxLauncherLite.mk" clean
