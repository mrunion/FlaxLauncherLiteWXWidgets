.PHONY: clean All

All:
	@echo "----------Building project:[ FlaxLauncherLite - Debug ]----------"
	@cd "FlaxLauncherLite" && "$(MAKE)" -f  "FlaxLauncherLite.mk" PrePreBuild && "$(MAKE)" -f  "FlaxLauncherLite.mk"
clean:
	@echo "----------Cleaning project:[ FlaxLauncherLite - Debug ]----------"
	@cd "FlaxLauncherLite" && "$(MAKE)" -f  "FlaxLauncherLite.mk" clean
