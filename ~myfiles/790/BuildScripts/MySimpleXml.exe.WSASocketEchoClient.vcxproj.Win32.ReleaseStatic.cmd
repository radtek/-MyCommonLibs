call "D:\Microsoft Visual Studio\2019\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x86
pushd "E:\MyProjects\~MyCommonLibs\WSASocketEchoClient"
msbuild /p:UseEnv=true /p:plfatform=Win32 /p:configuration="ReleaseStatic" "WSASocketEchoClient.vcxproj" /flp:Summary;LogFile="E:\MyProjects\~MyCommonLibs\~myfiles\790\BuildScripts\MySimpleXml.exe.WSASocketEchoClient.vcxproj.Win32.ReleaseStatic.log"
popd
