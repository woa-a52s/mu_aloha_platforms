[PcdsFixedAtBuild.common]
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1440
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2560

# Smbios Info
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"AYANEO"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Pocket S"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"PS"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Graphic QRD"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdABLProduct|"AYANEO Pocket S"

# Display Caller
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdDisplayCallerExitDisableDisplay|FALSE
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdDisplayCallerStallBeforeEnable|1000

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1440
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2560
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1440
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2560
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|180     # = 1440 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|134        # = 2560 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|180          # = 1440 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|134             # = 2560 / EFI_GLYPH_HEIGHT(19)
