                                       // For width
// sample(0)
std::wstring dir = L"\\sandbox";       
std::wstring p = dir + L"\\foobar.txt";
std::wstring copy = p;
copy += ".bak";
CopyFile(p, copy, false);



std::string dir_copy = dir + ".bak";
SHFILEOPSTRUCT s = { 0 };
s.hwnd = someHwndFromSomewhere;
s.wFunc = FO_COPY;
s.fFlags = FOF_SILENT;
s.pFrom = dir.c_str();
s.pTo = dir_copy.c_str();
SHFileOperation(&s);
// end-sample

                                       // For width
// sample(1)
fs::path dir = "/";                    
dir /= "sandbox";
fs::path p = dir / "foobar.txt";
fs::path copy = p;
copy += ".bak";
fs::copy(p, copy);


fs::path dir_copy = dir;
dir_copy += ".bak";





fs::copy(dir, dir_copy, fs::copy_options::recursive);
// end-sample

