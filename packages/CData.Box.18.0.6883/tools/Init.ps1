param($installPath, $toolsPath, $package, $project)
[System.Reflection.Assembly]::LoadFile("$($installPath)\lib\net35\System.Data.CData.Box.dll")
[System.Data.CData.Box.Nuget]::CheckNugetLicense("nuget")