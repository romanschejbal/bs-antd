/**
 * function createBindings() {
 *  const trs = Array.from($0.querySelectorAll("tr"));
 *  const tds = trs.map(tr => Array.from(tr.querySelectorAll("td"))).filter(a => a.length);
 *  return tds.map(row => `~${row[0].textContent}:${row[2].textContent}`).join(',');
 * } */

let tts: string => string = [%raw
  {|function(t) {
      if (t[t.length - 1] === "_") {
        t = t.substr(0, t.length - 1);
      }
      return t.replace(/_/g, "-");
  }|}
];