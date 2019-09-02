let tts: string => string = [%raw
  {|function(t) {
      if (t[t.length - 1] === "_") {
        t = t.substr(0, t.length - 1);
      }
      return t.replace(/_/g, "-");
  }|}
];