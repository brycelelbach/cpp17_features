                                         // For width
// sample(primary)

switch (device d = /* ... */; d.status())
{
  case sleep: d.wake();
  case ready: d.run(); break;
  case bad:   std::terminate(); 
}
// end-sample

