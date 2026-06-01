// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class sebasvillarroelLAB04EditorTarget : TargetRules
{
	public sebasvillarroelLAB04EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("sebasvillarroelLAB04");
	}
}
