goto LABEL_35;                              // Goto not a valid property error
  v7 = *(_WORD *)(v6 + 8);                      // Offset for Name
  if ( v7 < 0 )                                 // if failed
    goto LABEL_35;                              // Goto not a valid property error
  v8 = kname[v7];                               // Prop table (Nested)
  v36 = *(_DWORD *)(*v3 + 12);
  v9 = (_DWORD *)rbx_get_property(v8);          // Get prop out of KName (nested table)
  if ( !v9 )
    goto LABEL_35;                              // Goto not a valid property error
